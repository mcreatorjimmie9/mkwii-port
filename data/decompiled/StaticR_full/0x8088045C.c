/* Function at 0x8088045C, size=16 bytes */
/* Stack frame: 336 bytes */

void FUN_8088045C(void)
{
    /* Stack frame: -336(r1) */
    *(0x154 + r1) = r0; // stw @ 0x80880464
    /* stfd f31, 0x140(r1) */ // 0x80880468
}