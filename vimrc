" PDX quizor vimrc
" Last edited Fri May 27 00:51:42 PDT 2016
" NOTE: all of the commands can be researched by looking
"  up documentation with :help <topic>

filetype indent plugin on
syntax on " turn on syntax highlighting
set number " line numbers
set ruler
" set cursorline
color desert " set color scheme to desert, more schemes in vim's color folder
set background=dark

" search options
" highlight search results, toggle with :set highlight! or disable with :noh
set hlsearch
 " show incremental matches to search options as it is being typed
set incsearch
set ignorecase
set smartcase

set backspace=indent,eol,start
set nostartofline
set autoindent
set laststatus=2 " always display status
set confirm
set shiftwidth=4
set tabstop=4
set softtabstop=4
set expandtab
set smarttab
set smartindent

set mouse=c " disable use of mouse, set vim to command line mode

" nonrecursive remap of arrow keys to disable them.
noremap <Up> <NOP>
noremap <Right> <NOP>
noremap <Down> <NOP>
noremap <Left> <NOP>
" nonrecursive remap of arrow keys insert mode to disable them.
inoremap <Up> <NOP>
inoremap <Right> <NOP>
inoremap <Down> <NOP>
inoremap <Left> <NOP>

" save on refocus
:au FocusLost * :wa " will complain on untitled and read-only buffers
" Tell vim to remember certain things when we exit
"  '10  :  marks will be remembered for up to 10 previously edited files
"  "100 :  will save up to 100 lines for each register
"  :20  :  up to 20 lines of command-line history will be remembered
"  %    :  saves and restores the buffer list
"  n... :  where to save the viminfo files
set viminfo='10,\"100,:20,%,n~/.viminfo

" function to restore cursor position
function! ResCur()
  if line("'\"") <= line("$")
    normal! g`"
    return 1
  endif
endfunction

" autocommands
" restore cursor
augroup resCur
  autocmd!
  autocmd BufWinEnter * call ResCur()
augroup END

