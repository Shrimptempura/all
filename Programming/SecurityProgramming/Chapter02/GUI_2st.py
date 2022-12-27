import tkinter as tk
from tkinter import ttk, messagebox  # themed tk, add messagebox
from caesarCipher import caesarEncryption, caesarDecryption
import string

LETTERS = string.ascii_uppercase

gui = tk.Tk() # create class instance
gui.geometry('280x110')
gui.title("Caesar Cipher in tkinter")
gui.iconbitmap('py.ico')

def click_event_one():
    if entry_key_str.get():
        ciphertext = caesarEncryption(entry_one_str.get(), int(entry_key_str.get()), LETTERS)
        print(ciphertext)
        entry_two_str.set(ciphertext)
        entry_one_str.set("")
        update_label.config(text="Ciphertext: "+ciphertext)
    else:
        messagebox.showwarning("Caesar Cipher", "Input KEY")

def click_event_two():
    if entry_key_str.get():
        plaintext = caesarDecryption(entry_two_str.get(), int(entry_key_str.get()), LETTERS)
        print(plaintext)
        entry_one_str.set(plaintext)
        entry_two_str.set("")
        update_label.config(text="Plaintext: "+plaintext)
    else:
        messagebox.showwarning("Caesar Cipher", "Input KEY")

key_label = tk.Label(gui, text="Key")
key_label.grid(row=0, column=0)

button_one = ttk.Button(gui, text="Encrypt", command=click_event_one)
button_one.grid(row=1, column=0)

button_two = ttk.Button(gui, text="Decrypt", command=click_event_two)
button_two.grid(row=2, column=0)

entry_key_str = tk.StringVar()
entry_key = ttk.Entry(gui, width=20, textvariable=entry_key_str)
entry_key.grid(row=0, column=1)

entry_one_str = tk.StringVar()
entry_one = ttk.Entry(gui, width=20, textvariable=entry_one_str)
entry_one.grid(row=1, column=1)

entry_two_str = tk.StringVar()
entry_two = ttk.Entry(gui, width=20, textvariable=entry_two_str)
entry_two.grid(row=2, column=1)

update_label = tk.Label(gui, text="Output here!!!!")
update_label.grid(row=3, column=0, columnspan=2)
gui.minsize()
gui.mainloop() # run main event loop