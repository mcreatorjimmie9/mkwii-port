/* Function at 0x805B2E08, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805B2E08(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805B2E18
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805B2E20
    r30 = r3;
    if (==) goto 0x0x805b2ec0;
    /* li r4, -1 */ // 0x805B2E2C
    r3 = r3 + 0x4100; // 0x805B2E30
    FUN_805B4E30(r4, r3); // bl 0x805B4E30
    /* lis r4, 0 */ // 0x805B2E38
    r3 = r30 + 0x3e60; // 0x805B2E3C
    r4 = r4 + 0; // 0x805B2E40
    /* li r5, 0xa8 */ // 0x805B2E44
    /* li r6, 4 */ // 0x805B2E48
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* lis r4, 0 */ // 0x805B2E50
    r3 = r30 + 0x3ba0; // 0x805B2E54
    r4 = r4 + 0; // 0x805B2E58
    /* li r5, 0xb0 */ // 0x805B2E5C
    /* li r6, 4 */ // 0x805B2E60
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* lis r4, 0 */ // 0x805B2E68
}