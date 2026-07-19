/* Function at 0x805F899C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805F899C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x805F89A8
    *(0xc + r1) = r31; // stw @ 0x805F89AC
    r31 = r3;
    if (==) goto 0x0x805f89c4;
    FUN_8061DC28(); // bl 0x8061DC28
    r4 = r31 + 0xb0; // 0x805F89BC
    FUN_8062A210(r4); // bl 0x8062A210
    r0 = *(0x14 + r1); // lwz @ 0x805F89C4
    r31 = *(0xc + r1); // lwz @ 0x805F89C8
    return;
}