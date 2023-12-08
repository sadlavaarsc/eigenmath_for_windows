add_rules("mode.debug", "mode.release") 

target("eigenmath")
    set_kind("binary") 
    add_files("*.c")