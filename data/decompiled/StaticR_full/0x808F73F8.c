/* Function at 0x808F73F8, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808F73F8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x808F7400
    *(0xc + r1) = r31; // stw @ 0x808F7408
    *(8 + r1) = r30; // stw @ 0x808F740C
    r30 = *(0 + r3); // lwz @ 0x808F7410
    if (==) goto 0x0x808f7510;
    /* li r0, 0 */ // 0x808F741C
    *(0 + r3) = r0; // stw @ 0x808F7420
    if (==) goto 0x0x808f7510;
    /* lis r4, 0 */ // 0x808F7428
    r3 = r30 + 0x42a8; // 0x808F742C
    r4 = r4 + 0; // 0x808F7430
    /* li r5, 0x30 */ // 0x808F7434
    /* li r6, 0x18 */ // 0x808F7438
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* lis r31, 0 */ // 0x808F7440
    r3 = r30 + 0x4140; // 0x808F7444
    r4 = r31 + 0; // 0x808F7448
    /* li r5, 0x30 */ // 0x808F744C
    /* li r6, 6 */ // 0x808F7450
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
}