/* Function at 0x8061DA88, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_8061DA88(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8061DA88
    r3 = *(8 + r3); // lwz @ 0x8061DA8C
    r3 = *(0x90 + r3); // lwz @ 0x8061DA90
    r3 = *(4 + r3); // lwz @ 0x8061DA94
    r3 = r3 + 0x68; // 0x8061DA98
    return;
}