/* Function at 0x805F70BC, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_805F70BC(int r4)
{
    /* li r4, -1 */ // 0x805F70BC
    /* li r0, 0 */ // 0x805F70C0
    *(0x1c + r3) = r4; // stw @ 0x805F70C4
    *(0xcc + r3) = r0; // sth @ 0x805F70C8
    return;
}