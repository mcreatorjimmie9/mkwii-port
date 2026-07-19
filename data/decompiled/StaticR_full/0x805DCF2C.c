/* Function at 0x805DCF2C, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805DCF2C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x805DCF44
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805DCF4C
    r28 = r3;
    if (==) goto 0x0x805dcfc0;
    /* lis r4, 0 */ // 0x805DCF58
    /* li r30, 0 */ // 0x805DCF5C
    r4 = r4 + 0; // 0x805DCF60
    *(0 + r3) = r4; // stw @ 0x805DCF64
    /* li r31, 0 */ // 0x805DCF68
    /* b 0x805dcf9c */ // 0x805DCF6C
    r3 = *(4 + r28); // lwz @ 0x805DCF70
    /* lwzx r3, r3, r31 */ // 0x805DCF74
    if (==) goto 0x0x805dcf94;
    r12 = *(0 + r3); // lwz @ 0x805DCF80
    /* li r4, 1 */ // 0x805DCF84
    r12 = *(8 + r12); // lwz @ 0x805DCF88
    /* mtctr r12 */ // 0x805DCF8C
    /* bctrl  */ // 0x805DCF90
    r31 = r31 + 4; // 0x805DCF94
    r30 = r30 + 1; // 0x805DCF98
    r0 = *(8 + r28); // lwz @ 0x805DCF9C
    if (<) goto 0x0x805dcf70;
    r3 = *(4 + r28); // lwz @ 0x805DCFA8
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x805dcfc0;
    r3 = r28;
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x805DCFC0
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x805DCFC8
    r29 = *(0x14 + r1); // lwz @ 0x805DCFCC
    r28 = *(0x10 + r1); // lwz @ 0x805DCFD0
}