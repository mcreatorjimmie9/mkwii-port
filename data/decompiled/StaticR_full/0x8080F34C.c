/* Function at 0x8080F34C, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_8080F34C(int r3)
{
    r12 = *(0 + r3); // lwz @ 0x8080F34C
    r12 = *(0xf0 + r12); // lwz @ 0x8080F350
    /* mtctr r12 */ // 0x8080F354
    /* bctr  */ // 0x8080F358
}