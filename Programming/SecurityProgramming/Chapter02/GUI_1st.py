import tkinter as tk
from tkinter import ttk  # themed tk

def click_event():
    gui.title("Button has been clicked")
    button_one.config(text="I have been clicked!")
    another_button = ttk.Button(gui, text="Another", command=click_event)
    another_button.pack()

# 첫번째 과정
gui = tk.Tk() # create class instance
gui.geometry('600x400')
gui.title("GUI written in tkinter")

# 두번째 과정 : Adding widget to GUI
# from tkinter import ttk  # themed tk 추가
gui.iconbitmap('py.ico')
button_one = ttk.Button(gui, text="Click Me", command=click_event)
button_one.pack(side=tk.LEFT)
gui.mainloop() # run main event loop

