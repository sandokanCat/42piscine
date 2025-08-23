" ================================
" VIMRC FOR 42 BARCELONA NORMINETTE
" ================================

" SHOW ABSOLUTE LINE NUMBERS
set number

" ENABLE SYNTAX HIGHLIGHTING
syntax on
filetype plugin indent on

" USE REAL TABS INSTEAD OF SPACES
set noexpandtab      " DISABLE TAB TO SPACE CONVERSION
set tabstop=4        " ONE TAB = 4 SPACES
set shiftwidth=4     " INDENTATION WITH >> AND << = 4 SPACES
set softtabstop=4    " TAB AND BACKSPACE BEHAVE LIKE REAL TABS

" LIMIT VISUAL COLUMN WIDTH
set colorcolumn=81   " VISUAL ALERT AT COLUMN 81
set textwidth=80     " AUTOMATIC LINE WRAPPING AT 80 CHARACTERS

" REMOVE TRAILING WHITESPACE ON SAVE
autocmd BufWritePre * :%s/\s\+$//e

" ENABLE AUTO-INDENTATION
set autoindent
set smartindent

" VISUAL OPTIONS
set ruler            " SHOW CURSOR POSITION
set showcmd          " SHOW PARTIAL COMMANDS
set nowrap           " DISABLE LINE WRAPPING
set scrolloff=3      " KEEP 3 LINES OF MARGIN WHEN MOVING CURSOR

" COLORS AND IMPROVEMENTS
set background=dark
colorscheme desert

" OPTIONAL: HIGHLIGHT VISIBLE TABS AND TRAILING WHITESPACE
set list
set listchars=tab:>-,trail:·

" RUN NORMINETTE AFTER SAVING C FILES
autocmd BufWritePost *.c :cexpr system('norminette ' . expand('%'))
autocmd BufWritePost *.c :copen

