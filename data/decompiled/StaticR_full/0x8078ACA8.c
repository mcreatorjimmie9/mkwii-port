/* Function at 0x8078ACA8, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8078ACA8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8078ACBC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078ACC4
    r29 = r3;
    if (==) goto 0x0x8078ada8;
    /* addic. r3, r3, 0x18c */ // 0x8078ACD0
    if (==) goto 0x0x8078acdc;
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r3, r29, 0x178 */ // 0x8078ACDC
    if (==) goto 0x0x8078ace8;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8078ACE8
    r3 = r29 + 0x1c; // 0x8078ACEC
    r4 = r4 + 0; // 0x8078ACF0
    /* li r5, 0x74 */ // 0x8078ACF4
    /* li r6, 3 */ // 0x8078ACF8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r3, r29, 0x18 */ // 0x8078AD00
    if (==) goto 0x0x8078ad0c;
    FUN_805E3430(r5, r6); // bl 0x805E3430
    if (==) goto 0x0x8078ad98;
    /* lis r4, 0 */ // 0x8078AD14
    /* lis r3, 0 */ // 0x8078AD18
    r4 = r4 + 0; // 0x8078AD1C
}