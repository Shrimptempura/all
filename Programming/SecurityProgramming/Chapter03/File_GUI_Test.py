import tkinter as tk
from tkinter import ttk
from PIL import ImageTk, Image
from tkinter import filedialog, scrolledtext
from caesarCipher import caesarEncryption, caesarDecryption
import string

LETTERS = string.ascii_letters

root = tk.Tk()
root.title('filedialog study')

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


def encrypt_text():
    plaintext = text.get("1.0", tk.END)
    ciphertext = caesarEncryption(plaintext, int(entry_key_str.get()), LETTERS)
    print(ciphertext)
    text.clipboard_clear()
    text.delete("1.0", tk.END)
    text.insert("1.0", ciphertext.encode('utf-8'))


def decrypt_text():
    ciphertext = text.get("1.0", tk.END)
    plaintext = caesarDecryption(ciphertext, int(entry_key_str.get()), LETTERS)
    print(plaintext)
    text.clipboard_clear()
    text.delete("1.0", tk.END)
    text.insert("1.0", plaintext.encode('utf-8'))


key_label = ttk.Label(root, text="Key")  # modify gui --> tab_one
key_label.grid(row=0, column=0)

entry_key_str = tk.StringVar()
entry_key = ttk.Entry(root, width=20, textvariable=entry_key_str)  # modify gui --> tab_one
entry_key.grid(row=0, column=1)

my_btn1 = ttk.Button(root, text='텍스트 파일 열기', command=open_text)
my_btn1.grid(row=1, column=0)
my_btn2 = ttk.Button(root, text='텍스트 암호화', command=encrypt_text)
my_btn2.grid(row=2, column=0)
my_btn3 = ttk.Button(root, text='텍스트 복호화', command=decrypt_text)
my_btn3.grid(row=2, column=1)
my_btn4 = ttk.Button(root, text='이미지 파일 열기', command=open_image)
my_btn4.grid(row=3, column=0)

root.mainloop()