/* Function at 0x8085FDC8, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8085FDC8(int r5, int r6, int r7)
{
    *(0x4c + r3) = r7; // stw @ 0x8085FDC8
    /* li r5, 1 */ // 0x8085FDCC
    /* li r7, 0xc */ // 0x8085FDD0
    *(0x54 + r3) = r6; // stw @ 0x8085FDD4
    /* li r6, 0 */ // 0x8085FDD8
    /* b 0x8085fb50 */ // 0x8085FDDC
}