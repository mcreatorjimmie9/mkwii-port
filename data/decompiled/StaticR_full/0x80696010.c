/* Function at 0x80696010, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80696010(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80696020
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80696028
    r30 = r3;
    if (==) goto 0x0x80696060;
    if (==) goto 0x0x80696050;
    /* li r4, -1 */ // 0x80696038
    r3 = r3 + 0x11c; // 0x8069603C
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x80696048
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80696060;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80696064
    r30 = *(8 + r1); // lwz @ 0x80696068
    r0 = *(0x14 + r1); // lwz @ 0x8069606C
    return;
}