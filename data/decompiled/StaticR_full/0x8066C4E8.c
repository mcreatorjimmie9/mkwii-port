/* Function at 0x8066C4E8, size=48 bytes */
/* Stack frame: 0 bytes */

int FUN_8066C4E8(int r3, int r4)
{
    if (<) goto 0x0x8066c500;
    r3 = *(4 + r3); // lwz @ 0x8066C4F0
    r0 = *(0 + r3); // lhz @ 0x8066C4F4
    if (<) goto 0x0x8066c508;
    /* li r3, 0 */ // 0x8066C500
    return;
    /* slwi r0, r4, 3 */ // 0x8066C508
    r3 = r3 + r0; // 0x8066C50C
    r3 = r3 + 0xc; // 0x8066C510
    return;
}