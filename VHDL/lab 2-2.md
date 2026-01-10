```c
library ieee;
use ieee.std_logic_1164.all;
entity lab02_1 is
port
	(
		a: in std_logic;
		b: in std_logic;
		c: in std_logic;
		d: in std_logic;
		y: out std_logic
		);
end lab02_1;

architecture arc of lab02_1 is
begin
        y <= ((not a) or (not b) or c or (not d)) and (b or d or (not a) or (not c)) and (a or (not c) or d) and (a or (not b) or (not c));

end arc;
```
<img width="1475" height="435" alt="image" src="https://github.com/user-attachments/assets/41887d7a-b05c-431f-a1e7-17b9515cf0ef" />
