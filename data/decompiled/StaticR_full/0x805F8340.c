/* Function at 0x805F8340, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805F8340(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x805F834C
    *(0xc + r1) = r31; // stw @ 0x805F8350
    r31 = r3;
    if (==) goto 0x0x805f8368;
    FUN_8061DC28(); // bl 0x8061DC28
    r4 = r31 + 0xb0; // 0x805F8360
    FUN_8062A210(r4); // bl 0x8062A210
    r0 = *(0x14 + r1); // lwz @ 0x805F8368
    r31 = *(0xc + r1); // lwz @ 0x805F836C
    return;
}