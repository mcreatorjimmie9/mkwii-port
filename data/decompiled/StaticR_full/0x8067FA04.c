/* Function at 0x8067FA04, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_8067FA04(void)
{
    /* li r0, 0 */ // 0x8067FA04
    *(0xc + r3) = r0; // stw @ 0x8067FA08
    *(0x1c + r3) = r0; // stw @ 0x8067FA0C
    *(0x2c + r3) = r0; // stw @ 0x8067FA10
    *(0x3c + r3) = r0; // stw @ 0x8067FA14
    *(0x4c + r3) = r0; // stw @ 0x8067FA18
    return;
}