/* Function at 0x8091EFA4, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_8091EFA4(int r6)
{
    /* lis r6, 0 */ // 0x8091EFA4
    r0 = *(0 + r6); // lwz @ 0x8091EFA8
    *(0 + r5) = r0; // stw @ 0x8091EFAC
    *(4 + r5) = r4; // stw @ 0x8091EFB0
    *(8 + r5) = r3; // stw @ 0x8091EFB4
    *(0 + r6) = r5; // stw @ 0x8091EFB8
    return;
}