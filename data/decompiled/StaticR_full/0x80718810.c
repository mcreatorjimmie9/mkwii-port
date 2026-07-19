/* Function at 0x80718810, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80718810(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80718824
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8071882C
    r29 = r3;
    if (==) goto 0x0x80718894;
    /* lis r4, 0 */ // 0x80718838
    /* lis r31, 0 */ // 0x8071883C
    r4 = r4 + 0; // 0x80718840
    *(0 + r3) = r4; // stw @ 0x80718844
    r3 = *(0xac + r3); // lwz @ 0x80718848
    r4 = r31 + 0; // 0x8071884C
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb0 + r29); // lwz @ 0x80718854
    r4 = r31 + 0; // 0x80718858
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb4 + r29); // lwz @ 0x80718860
    r4 = r31 + 0; // 0x80718864
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb8 + r29); // lwz @ 0x8071886C
    r4 = r31 + 0; // 0x80718870
}