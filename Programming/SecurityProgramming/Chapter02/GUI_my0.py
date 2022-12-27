import tkinter as tk
from tkinter import ttk, messagebox
import string
from caesarCipher import caesarEncryption, caesarDecryption

LETTERS = string.ascii_uppercase + string.ascii_lowercase

# def func1():
#     print("Btn1의 text=클릭미를 누루면 command(func1)가 실행됨, '이름'은 위에 이름의 함수가 있어야 함")

def func1():
    if entry_key_str.get():
        print("call func1")
        retValue = caesarEncryption(entry_one_str.get(), entry_key_str.get()), LETTERS
        print(retValue)
        entry_two_str.set(retValue)
        entry_one_str.set("")
    else:
        messagebox.showwarning("Caesar Encrypt", "Input Key")
    
def func2():
    if entry_key_str.get():
        plaintext = caesarDecryption(entry_two_str.get(), int(entry_key_str.get()), LETTERS)
        print(plaintext)
        entry_one_str.set(plaintext)
        entry_two_str.set("")
    else:
        messagebox.showwarning("Caesar Cipher", "Input KEY")

gui = tk.Tk()   # create class instance
gui.geometry('300x200')
gui.title("GUI written in tkinter")

key_label = ttk.Label(gui, text="Key")
key_label.grid(row=0, column=0)

entry_key_str = tk.StringVar()
entry_key = ttk.Entry(gui, width=20, textvariable=entry_key_str)
entry_key.grid(row=0, column=1)

button_one = ttk.Button(gui, test="Encrypt", command=func1)
button_one.grid(row=1, column=1)

entry_one_str = tk.StringVar()
entry_one = ttk.Entry(gui, width=20, textvariable=entry_one_str)
entry_one.grid(row=1, column=1)

button_two = ttk.Button(gui, text="Decrypt", command=func2)
button_two.grid(row=2, column=0)

entry_two_str = tk.StringVar()
entry_two = ttk.Entry(gui, width=20, textvariable=entry_two_str)
entry_two.grid(row=2, column=1)

button_one = ttk.Button(gui, text="Click Me", command=func1)
button_one.pack(side=tk.LEFT)
button_two = ttk.Button(gui, test="Btn 2", command=func2).pack()

gui.minsize()
gui.mainloop()  # run main event loop