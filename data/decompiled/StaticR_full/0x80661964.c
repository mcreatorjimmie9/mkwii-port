/* Function at 0x80661964, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80661964(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8066196C
    /* li r0, 8 */ // 0x80661974
    r4 = r4 + 0; // 0x80661978
    *(0xc + r1) = r31; // stw @ 0x8066197C
    *(8 + r1) = r30; // stw @ 0x80661980
    /* li r30, 0 */ // 0x80661984
    /* mtctr r0 */ // 0x80661988
    r0 = *(0 + r4); // lwz @ 0x8066198C
    if (!=) goto 0x0x8066199c;
    /* b 0x806619e0 */ // 0x80661998
    r0 = *(4 + r4); // lwz @ 0x8066199C
    if (!=) goto 0x0x806619ac;
    /* b 0x806619e0 */ // 0x806619A8
    r0 = *(8 + r4); // lwz @ 0x806619AC
    r5 = r4 + 8; // 0x806619B0
    if (!=) goto 0x0x806619c0;
    /* b 0x806619e0 */ // 0x806619BC
    r0 = *(4 + r5); // lwz @ 0x806619C0
    if (!=) goto 0x0x806619d0;
    /* b 0x806619e0 */ // 0x806619CC
    r4 = r4 + 0x10; // 0x806619D0
    r30 = r30 + 1; // 0x806619D4
    if (counter-- != 0) goto 0x0x8066198c;
    /* li r30, -1 */ // 0x806619DC
    r3 = r30;
    /* li r31, 0 */ // 0x806619E4
    /* li r4, 0 */ // 0x806619E8
    /* li r5, 0 */ // 0x806619EC
    /* li r6, 0 */ // 0x806619F0
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80661a54;
    r3 = r30;
    /* li r4, 1 */ // 0x80661A04
    /* li r5, 0 */ // 0x80661A08
    /* li r6, 0 */ // 0x80661A0C
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80661a54;
    r3 = r30;
    /* li r4, 2 */ // 0x80661A20
    /* li r5, 0 */ // 0x80661A24
    /* li r6, 0 */ // 0x80661A28
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80661a54;
    r3 = r30;
    /* li r4, 2 */ // 0x80661A3C
    /* li r5, 1 */ // 0x80661A40
    /* li r6, 0 */ // 0x80661A44
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (==) goto 0x0x80661a58;
    /* li r31, 1 */ // 0x80661A54
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80661A5C
    r30 = *(8 + r1); // lwz @ 0x80661A60
    r0 = *(0x14 + r1); // lwz @ 0x80661A64
    return;
}