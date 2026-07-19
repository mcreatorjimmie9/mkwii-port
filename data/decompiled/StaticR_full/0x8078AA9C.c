/* Function at 0x8078AA9C, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8078AA9C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x8078AAA4
    *(0xc + r1) = r31; // stw @ 0x8078AAAC
    *(8 + r1) = r30; // stw @ 0x8078AAB0
    r31 = *(0 + r3); // lwz @ 0x8078AAB4
    if (==) goto 0x0x8078abd0;
    /* li r0, 0 */ // 0x8078AAC0
    *(0 + r3) = r0; // stw @ 0x8078AAC4
    if (==) goto 0x0x8078abd0;
    /* addic. r3, r31, 0x18c */ // 0x8078AACC
    if (==) goto 0x0x8078aad8;
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r3, r31, 0x178 */ // 0x8078AAD8
    if (==) goto 0x0x8078aae4;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8078AAE4
    r3 = r31 + 0x1c; // 0x8078AAE8
    r4 = r4 + 0; // 0x8078AAEC
    /* li r5, 0x74 */ // 0x8078AAF0
    /* li r6, 3 */ // 0x8078AAF4
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r3, r31, 0x18 */ // 0x8078AAFC
    if (==) goto 0x0x8078ab08;
    FUN_805E3430(r5, r6); // bl 0x805E3430
    if (==) goto 0x0x8078abc8;
    /* lis r4, 0 */ // 0x8078AB10
}