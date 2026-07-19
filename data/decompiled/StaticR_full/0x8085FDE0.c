/* Function at 0x8085FDE0, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8085FDE0(int r5, int r6, int r7)
{
    *(0x50 + r3) = r5; // stw @ 0x8085FDE0
    /* li r5, 2 */ // 0x8085FDE4
    /* li r7, 0xc */ // 0x8085FDE8
    *(0x54 + r3) = r6; // stw @ 0x8085FDEC
    /* li r6, 0 */ // 0x8085FDF0
    /* b 0x8085fb50 */ // 0x8085FDF4
}