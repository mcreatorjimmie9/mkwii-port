/* Function at 0x80846B54, size=16 bytes */
/* Stack frame: 192 bytes */

void FUN_80846B54(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x80846B5C
    /* stfd f31, 0xb0(r1) */ // 0x80846B60
}