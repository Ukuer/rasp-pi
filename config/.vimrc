set nu
syntax enable
syntax on
set tabstop=4
set softtabstop=4
set shiftwidth=4
set autoindent
set ruler
"set cursorline
set mouse=a
set smartindent	
set background=dark 
colorscheme desert

inoremap jk <Esc>
" 将 jk 映射为 <Esc>

map ^M I#<ESC>
" 将 CTRL + M 用作 注释符

ab email 2032108783@qq.com
" 将 email 替换为 2032108783@qq.com

" 启用文件类型插件
filetype plugin on

" 配置pydiction插件路径
let g:pydiction_location = '~/.vim/bundle/pydiction/complete-dict'

" 设置pydiction补全菜单的高度，默认是8
" let g:pydiction_menu_height = 20

" the following is for youcompleteme
set nocompatible
filetype off

set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
Plugin 'VundleVim/Vundle.vim'
Plugin 'Valloric/YouCompleteMe'
call vundle#end()

" if you want to delete plugins ,just delete Bundle xxx, and cmd BundleClean

filetype plugin indent on

let g:ycm_global_ycm_extra_conf = '~/.vim/bundle/YouCompleteMe/.ycm_extra_conf.py'
let g:ycm_key_invoke_completion = '<c-z>'
let g:ycm_min_num_of_chars_for_completion=2
let g:ycm_semantic_triggers = {
	\ 'c,cpp,python,java,go,erlang,perl':['re!\w{2}'],
	\ 'cs,lua,javascript':['re!\w{2}'],
	\ }
set completeopt=menu,menuone
let g:ycm_add_preview_to_completeopt=0
let g:ycm_register_as_syntastic_checker=0
let g:ycm_max_num_candidates=30
let g:ycm_complete_in_strings=1
let g:ycm_show_diagnostics_ui=0
"let g:ycm_filetype_whitelist{
"	\ "c":1,
"	\ "cpp":1,
"	\ "objc":1,
"	\ "python":1,
"	\ "Java":1,
"	\ "sh":1,
"	\ "zsh":1,
"	\ "vim":1,
"	\ "zimbu":1,
"	\ }

let g:ycm_min_num_identifier_candidate_chars = 2
"let g:syntastic_ignore_files=[".*\.py$"]
let g:ycm_collect_identifiers_from_tag_files = 1

highlight PMenu ctermfg=4 ctermbg=8 guifg=black guibg=darkgrey
highlight PMenuSel ctermfg=11 ctermbg=10 guifg=darkgrey guibg=black 
