--local xrandr = require("modules.foggy.xrandr")
--local awful  = require("awful")

local widget = require("lib.widget")

local test   = {}

local function init()
    local b = widget:button()
    b:set_text("Monitors")

    b:set_func(function()
        local s = wmapi:easy_async_with_shell("zenity --file-selection")
        log:message(tostring(s))

        b:set_text(s)
    end)

    return b:get()
end

return setmetatable(test, { __call = function(_, ...)
    return init(...)
end })
