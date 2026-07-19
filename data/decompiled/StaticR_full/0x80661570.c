/* Function at 0x80661570, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_80661570(int r4)
{
    /* li r0, 0 */ // 0x80661570
    /* li r4, 2 */ // 0x80661574
    *(0x70 + r3) = r4; // stw @ 0x80661578
    *(0x68 + r3) = r0; // stw @ 0x8066157C
    *(0x6c + r3) = r0; // stw @ 0x80661580
    return;
}