/* Function at 0x808420F0, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_808420F0(int r3)
{
    r0 = *(0x20 + r3); // lwz @ 0x808420F0
    if (==) goto 0x0x80842104;
    /* li r3, 0 */ // 0x808420FC
    return;
    *(0x20 + r3) = r4; // stw @ 0x80842104
    /* li r3, 1 */ // 0x80842108
    return;
}