```c
Library IEEE;
Use IEEE.std_logic_1164.all;

Entity lab03_1 is
    Port(
        clk    : in  std_logic;
        preset : in  std_logic;
        clear  : in  std_logic;
        sin    : in  std_logic;
        q0, q1, q2, q3 : out std_logic
    );
End lab03_1;

Architecture ARCH of lab03_1 is
Begin
    Process(preset, clear, clk)
        variable TMP0, TMP1, TMP2, TMP3 : std_logic;
    Begin
        if preset = '0' then
            TMP0 := '1'; TMP1 := '1'; TMP2 := '1'; TMP3 := '1';
        elsif clear = '0' then
            TMP0 := '0'; TMP1 := '0'; TMP2 := '0'; TMP3 := '0';
        elsif rising_edge(clk) then
            TMP3 := TMP2;  
            TMP2 := TMP1;
            TMP1 := TMP0;
            TMP0 := sin;    
        end if;

        q0 <= TMP0;
        q1 <= TMP1;
        q2 <= TMP2;
        q3 <= TMP3;
    End Process;
End ARCH;
```
