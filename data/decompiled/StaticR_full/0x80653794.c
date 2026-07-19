/* Function at 0x80653794, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80653794(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8065379C
    *(0x14 + r1) = r0; // stw @ 0x806537A0
    /* li r0, 0 */ // 0x806537A4
    *(0xc + r1) = r31; // stw @ 0x806537A8
    r31 = r3;
    *(0x7b4 + r3) = r0; // stw @ 0x806537B0
    r3 = *(0 + r4); // lwz @ 0x806537B4
    r3 = *(0 + r3); // lwz @ 0x806537B8
    r0 = *(0x38d + r3); // lbz @ 0x806537BC
    if (!=) goto 0x0x806537e8;
    FUN_8068608C(); // bl 0x8068608C
    if (==) goto 0x0x806537e8;
    r3 = *(0x38 + r3); // lwz @ 0x806537D4
    r0 = *(0xe + r3); // lbz @ 0x806537D8
    if (==) goto 0x0x806537e8;
    *(0x7b4 + r31) = r3; // stw @ 0x806537E4
    r0 = *(0x14 + r1); // lwz @ 0x806537E8
    r31 = *(0xc + r1); // lwz @ 0x806537EC
    return;
}