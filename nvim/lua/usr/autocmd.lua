-- highlight text when copying
vim.api.nvim_create_autocmd({ 'TextYankPost' }, {
    pattern = { '*' },
    callback = function()
        vim.highlight.on_yank({ timeout = 200 })
    end
})
