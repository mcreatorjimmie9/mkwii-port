/* Function at 0x805B7738, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_805B7738(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x805B7748
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805B7750
    r30 = r4;
    if (!=) goto 0x0x805b7764;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r31 = *(0xc94 + r3); // lwz @ 0x805B7760
    /* lis r3, 0 */ // 0x805B7764
    r3 = *(0 + r3); // lwz @ 0x805B7768
    r0 = *(0x263 + r3); // lbz @ 0x805B776C
    if (!=) goto 0x0x805b7780;
    /* li r0, -1 */ // 0x805B7778
    /* b 0x805b77b8 */ // 0x805B777C
    r3 = r30;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (==) goto 0x0x805b779c;
    /* li r0, 0 */ // 0x805B7794
    /* b 0x805b77b8 */ // 0x805B7798
    r3 = r30;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* li r0, -1 */ // 0x805B77AC
    if (==) goto 0x0x805b77b8;
    /* li r0, 1 */ // 0x805B77B4
    if (==) goto 0x0x805b77cc;
    if (==) goto 0x0x805b789c;
    /* b 0x805b7970 */ // 0x805B77C8
    if (!=) goto 0x0x805b77dc;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r31 = *(0xc94 + r3); // lwz @ 0x805B77D8
    r3 = r30;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (!=) goto 0x0x805b77f8;
    /* li r31, 0 */ // 0x805B77F0
}