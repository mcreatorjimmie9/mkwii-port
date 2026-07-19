/* Function at 0x8061E130, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_8061E130(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061E130
    /* mulli r0, r4, 0x2c */ // 0x8061E134
    r3 = *(0 + r3); // lwz @ 0x8061E138
    r3 = *(0x14 + r3); // lwz @ 0x8061E13C
    r3 = *(4 + r3); // lwz @ 0x8061E140
    r3 = r3 + r0; // 0x8061E144
    r3 = r3 + 0x1a4; // 0x8061E148
    return;
}