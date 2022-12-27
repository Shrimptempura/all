# 수업때 연습용, File_GUI_Test.py의 파일을 복사본
import tkinter as tk
from tkinter import ttk, filedialog

root = tk.Tk()  # gui를 걍 root로 했음
root.geometry('500x400') # 사이즈 지정
root.title('filedialog study') # 타이틀

def open_text():
        filedialog.askopenfilename(initialdir='', title='파일선택', filetypes=(
        ('png files', '*.png'), ('jpg files', '*.jpg'), ('all files', '*.*')))

# 버튼이 4개 필요,
# 텍스트파일 열기 '버튼'
my_btn1 = ttk.Button(root, text='텍스트 파일 열기', command=open_text)
                                            # open_text라는 function
my_btn1.grid(row=1, column=0)

root.mainloop()
