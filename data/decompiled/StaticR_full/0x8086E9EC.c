/* Function at 0x8086E9EC, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_8086E9EC(int r3, int r4)
{
    r3 = *(0x10 + r3); // lwz @ 0x8086E9EC
    /* mulli r0, r4, 0x60 */ // 0x8086E9F0
    r3 = *(0x104 + r3); // lwz @ 0x8086E9F4
    r3 = r3 + r0; // 0x8086E9F8
    r0 = *(0x18 + r3); // lwz @ 0x8086E9FC
    if (==) goto 0x0x8086ea10;
    r3 = *(0x1c + r3); // lwz @ 0x8086EA08
    return;
    /* li r3, -1 */ // 0x8086EA10
    return;
}