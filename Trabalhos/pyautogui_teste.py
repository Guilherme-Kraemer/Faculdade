import pyautogui
import time

# Pausa entre cada comando para evitar sobrecarga
pyautogui.PAUSE = 1

# Abre o menu Iniciar (Windows) usando a tecla "win"
pyautogui.press('win')

# Aguarda 1 segundo para garantir que o menu Iniciar está aberto
time.sleep(1)

# Digita "notepad" para procurar o bloco de notas
pyautogui.write('notepad')

# Pressiona "Enter" para abrir o bloco de notas
pyautogui.press('enter')

# Aguarda o bloco de notas abrir
time.sleep(2)

# Escreve uma mensagem no bloco de notas
pyautogui.write('Hello, this is an automated message using pyautogui!', interval=0.1)

# Aguarda 2 segundos
time.sleep(2)

# Fecha o bloco de notas (pressionando Alt + F4)
pyautogui.hotkey('alt', 'f4')

# Seleciona "Não salvar" pressionando a tecla "n" no diálogo de fechamento
pyautogui.press('n')

