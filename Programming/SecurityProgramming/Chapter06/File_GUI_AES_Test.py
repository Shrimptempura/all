import tkinter as tk
from tkinter import ttk
from PIL import ImageTk, Image
from tkinter import filedialog, scrolledtext, messagebox
from AES_Test_New import aesEncrypt, aesDecrypt # 추가
from Crypto.Hash import SHA512  # 추가

import string

LETTERS = string.ascii_letters

root = tk.Tk()
root.title('AES Enc/Dec study')

text = tk.Text(root, height=12)
text.grid(row=1, column=1, sticky='nsew')


def open_image():
    global my_image

    root.filename = filedialog.askopenfilename(initialdir='', title='파일선택', filetypes=(
        ('png files', '*.png'), ('jpg files', '*.jpg'), ('all files', '*.*')))

    my_Label = ttk.Label(root, text=root.filename) # 파일경로 view
    my_Label.grid(row=3, column=1)
    my_image = ImageTk.PhotoImage(Image.open(root.filename))
    my_ImageLabel = ttk.Label(image=my_image)  # 사진 view
    my_ImageLabel.grid(row=4, column=1)


def open_text():
    filetypes = (
        ('text files', '*.txt'),
        ('All files', '*.*')
    )
    # show the open file dialog
    f = filedialog.askopenfile(filetypes=filetypes)
    # read the text file and show its content on the Text
    text.delete('1.0', tk.END)
    text.insert('1.0', f.readlines())
    f.close()

def gen_Key_IV():
    hash = SHA512.new()
    hash.update(entry_key_str.get().encode('utf-8'))
    key = hash.digest()
    key = key[:32] # AES 키 사이즈 : 32 바이트(32*8 = 256비트) 값을 해시 함수를 변형 적용하여 생성함
    print("key:", key.hex())
    iv = hash.digest()
    iv = iv[:16]   # 일반적으로 별도로 설정해야 하지만, 여기서는 key 값의 압 16 바이트(16*8 = 128비트)로 설정하는 방식을 이용함
    print("IV:", iv.hex())
    return key, iv

def encrypt_text():
    if entry_key_str.get():
        plaintext = text.get("1.0", tk.END)
        key, iv = gen_Key_IV()
        #ciphertext = caesarEncryption(plaintext, int(entry_key_str.get()), LETTERS)
        ciphertext = aesEncrypt(plaintext.encode('utf-8'), key, iv)
        print(ciphertext)
        text.clipboard_clear()
        text.delete("1.0", tk.END)
        #text.insert("1.0", ciphertext.encode('utf-8'))
        text.insert("1.0", ciphertext.hex())
    else:
        messagebox.showwarning("File Encrypt", "Input Key!!!")


def decrypt_text():
    if entry_key_str.get():
        ciphertext = text.get("1.0", tk.END)
        key, iv = gen_Key_IV()
        #plaintext = caesarDecryption(ciphertext, int(entry_key_str.get()), LETTERS)
        plaintext = aesDecrypt(bytearray.fromhex(ciphertext), key, iv)
        print(plaintext)
        text.clipboard_clear()
        text.delete("1.0", tk.END)
        #text.insert("1.0", plaintext.encode('utf-8'))
        text.insert("1.0", plaintext.decode('utf-8'))
    else:
        messagebox.showerror("File Decrypt", "Input Key!!!")

key_label = ttk.Label(root, text="Key")  # modify gui --> tab_one
key_label.grid(row=0, column=0)

entry_key_str = tk.StringVar()
entry_key = ttk.Entry(root, width=30, textvariable=entry_key_str)  # modify gui --> tab_one
entry_key.grid(row=0, column=1, sticky="w")

my_btn1 = ttk.Button(root, text='텍스트 파일 열기', command=open_text)
my_btn1.grid(row=1, column=0)
my_btn2 = ttk.Button(root, text='텍스트 암호화', command=encrypt_text)
my_btn2.grid(row=2, column=0)
my_btn3 = ttk.Button(root, text='텍스트 복호화', command=decrypt_text)
my_btn3.grid(row=2, column=1)
my_btn4 = ttk.Button(root, text='이미지 파일 열기', command=open_image)
my_btn4.grid(row=3, column=0)

root.mainloop()
