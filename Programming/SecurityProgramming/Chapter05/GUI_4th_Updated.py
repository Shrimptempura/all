import tkinter as tk
from tkinter import ttk, messagebox, scrolledtext  # themed tk, add messagebox, scrolledtext
from caesarCipher import caesarEncryption, caesarDecryption
from AES_Test_New import aesEncrypt, aesDecrypt  # add AES
from Crypto import Random

import string

LETTERS = string.ascii_uppercase

BLOCK_SIZE = 16
KEY_SIZE = 32
key = Random.new().read(KEY_SIZE)
iv = Random.new().read(BLOCK_SIZE)

gui = tk.Tk() # create class instance
#gui.geometry('600x400')    # change size
gui.title("Cryptography GUI in tkinter")
gui.iconbitmap('py.ico')

# AES Encryption
def tab_two_widgets(parent):
    def click_event_one():
        if aes_entry_key_str.get():
            #aesEncrypt(message, key, iv)
            global iv, key
            ciphertext = aesEncrypt(aes_entry_one_str.get().encode('utf-8'), bytearray.fromhex(aes_entry_key_str.get()), bytearray.fromhex(aes_entry_iv_str.get()))
            print("ciphertext:", ciphertext.hex())
            aes_entry_two_str.set(ciphertext.hex())  ## add .decode()
            aes_entry_one_str.set("")
            aes_update_label.config(text="Ciphertext!!!")
            aes_scroll.clipboard_clear()  # clear clipboard!!!!!
            aes_scroll.insert(tk.INSERT, "Ciphertext: " + ciphertext.hex() + "\n")  # diaplay to scroll  add .decode()
        else:
            messagebox.showwarning("AES Cipher", "Set KEY")

    def click_event_two():
        if aes_entry_key_str.get():
            # aesDecrypt(ciphertext, key, iv)
            global iv, key
            plaintext = aesDecrypt(bytearray.fromhex(aes_entry_two_str.get()), bytearray.fromhex(aes_entry_key_str.get()), bytearray.fromhex(aes_entry_iv_str.get()))
            print("plaintext:", plaintext.decode())
            aes_entry_one_str.set(plaintext.decode())
            aes_entry_two_str.set("")
            aes_update_label.config(text="Plaintext!!!")
            aes_scroll.clipboard_clear()  # clear clipboard!!!!!
            aes_scroll.insert(tk.INSERT, "Plaintext: " + plaintext.decode() + "\n")  # diaplay to scroll
        else:
            messagebox.showwarning("AES Cipher", "Set KEY")

    def key_And_IV_Generate():
        BLOCK_SIZE = 16
        KEY_SIZE = 32
        key = Random.new().read(KEY_SIZE)
        iv = Random.new().read(BLOCK_SIZE)
        aes_entry_key_str.set(key.hex())
        aes_entry_iv_str.set(iv.hex())


    # modify gui --> tab_one
    aes_key_label = tk.Label(parent, text="Key")  # modify tab_one --> parent
    aes_key_label.grid(row=0, column=0)

    aes_iv_label = tk.Label(parent, text="IV")  # add IV label
    aes_iv_label.grid(row=1, column=0)

    aes_button_one = ttk.Button(parent, text="Encrypt", command=click_event_one)  # modify gui --> tab_one
    aes_button_one.grid(row=2, column=0)

    aes_button_two = ttk.Button(parent, text="Decrypt", command=click_event_two)  # modify gui --> tab_one
    aes_button_two.grid(row=3, column=0)

    ###
    aes_entry_key_str = tk.StringVar()
    aes_entry_key_str.set(key.hex())  ## add
    aes_entry_key = ttk.Entry(parent, width=45, textvariable=aes_entry_key_str)  # modify gui --> tab_one
    aes_entry_key.grid(row=0, column=1)

    aes_entry_iv_str = tk.StringVar()
    aes_entry_iv_str.set(iv.hex())  ## add
    aes_entry_iv = ttk.Entry(parent, width=45, textvariable=aes_entry_iv_str)  # modify gui --> tab_one
    aes_entry_iv.grid(row=1, column=1)

    aes_entry_one_str = tk.StringVar()
    aes_entry_one = ttk.Entry(parent, width=45, textvariable=aes_entry_one_str)  # modify gui --> tab_one
    aes_entry_one.grid(row=2, column=1)

    aes_entry_two_str = tk.StringVar()
    aes_entry_two = ttk.Entry(parent, width=45, textvariable=aes_entry_two_str)  # modify gui --> tab_one
    aes_entry_two.grid(row=3, column=1)

    aes_update_label = tk.Label(parent, text="Output here!!!!")  # modify gui --> tab_one
    aes_update_label.grid(row=4, column=0, columnspan=2)

    aes_output_label = tk.Label(parent, text="Output")  # modify gui --> tab_one
    aes_output_label.grid(row=5, column=0)

    aes_scroll = scrolledtext.ScrolledText(parent, width=60, height=14, wrap=tk.WORD)
    aes_scroll.grid(row=5, column=1)

    button_three = ttk.Button(parent, text="New Key & IV Generate", command=key_And_IV_Generate)  # modify gui --> tab_one
    button_three.grid(row=6, column=0)



# define as create_widgets function!!!
def create_widgets():
    def click_event_one():
        if entry_key_str.get():
            ciphertext = caesarEncryption(entry_one_str.get(), int(entry_key_str.get()), LETTERS)
            print(ciphertext)
            entry_two_str.set(ciphertext)
            entry_one_str.set("")
            update_label.config(text="Ciphertext: " + ciphertext)
        else:
            messagebox.showwarning("Caesar Cipher", "Input KEY")

    def click_event_two():
        if entry_key_str.get():
            plaintext = caesarDecryption(entry_two_str.get(), int(entry_key_str.get()), LETTERS)
            print(plaintext)
            entry_one_str.set(plaintext)
            entry_two_str.set("")
            update_label.config(text="Plaintext: " + plaintext)
        else:
            messagebox.showwarning("Caesar Cipher", "Input KEY")

    # create tab control
    tab_control = ttk.Notebook(gui)
    tab_one = ttk.Frame(tab_control)
    tab_control.add(tab_one, text="Caesar Cipher")
    tab_control.pack(fill='both')  # pack : make tab_control visible!!!!

    # create tab control
    # tab_two = ttk.Frame(tab_control)
    tab_two = ttk.LabelFrame(tab_control, text="AES Enc/Dec")
    tab_control.add(tab_two, text="AES Cipher")
    tab_control.pack(fill='both')  # pack : make tab_control visible!!!!

    tab_two_widgets(parent=tab_two)
    tab_control.pack(fill='both')  # pack : make tab_control visible!!!!

    # modify gui --> tab_one
    key_label = tk.Label(tab_one, text="Key")  # modify gui --> tab_one
    key_label.grid(row=0, column=0)

    button_one = ttk.Button(tab_one, text="Encrypt", command=click_event_one)  # modify gui --> tab_one
    button_one.grid(row=1, column=0)

    button_two = ttk.Button(tab_one, text="Decrypt", command=click_event_two)  # modify gui --> tab_one
    button_two.grid(row=2, column=0)

    entry_key_str = tk.StringVar()
    entry_key = ttk.Entry(tab_one, width=20, textvariable=entry_key_str)  # modify gui --> tab_one
    entry_key.grid(row=0, column=1)

    entry_one_str = tk.StringVar()
    entry_one = ttk.Entry(tab_one, width=20, textvariable=entry_one_str)  # modify gui --> tab_one
    entry_one.grid(row=1, column=1)

    entry_two_str = tk.StringVar()
    entry_two = ttk.Entry(tab_one, width=20, textvariable=entry_two_str)  # modify gui --> tab_one
    entry_two.grid(row=2, column=1)

    update_label = tk.Label(tab_one, text="Output here!!!!")  # modify gui --> tab_one
    update_label.grid(row=3, column=0, columnspan=2)

def run_gui():
    create_widgets()
    gui.minsize()
    gui.mainloop() # run main event loop

if __name__ == '__main__':
    run_gui()