/* Function at 0x806AFD30, size=384 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806AFD30(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x806AFD38
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x806AFD48
    *(0x14 + r1) = r29; // stw @ 0x806AFD4C
    r29 = r3;
    r3 = *(0 + r5); // lwz @ 0x806AFD54
    FUN_806E64B0(); // bl 0x806E64B0
    /* lis r3, 0 */ // 0x806AFD5C
    /* li r30, -1 */ // 0x806AFD60
    r3 = *(0 + r3); // lwz @ 0x806AFD64
    r3 = *(0 + r3); // lwz @ 0x806AFD68
    r0 = *(0 + r3); // lwz @ 0x806AFD6C
    if (==) goto 0x0x806afd94;
    if (==) goto 0x0x806afd94;
    if (==) goto 0x0x806afdbc;
    if (==) goto 0x0x806afdbc;
    /* b 0x806afde0 */ // 0x806AFD90
    r0 = *(0x6c + r29); // lwz @ 0x806AFD94
    if (==) goto 0x0x806afdac;
    if (==) goto 0x0x806afdb4;
    /* b 0x806afde0 */ // 0x806AFDA8
    /* li r30, 0x55 */ // 0x806AFDAC
    /* b 0x806afde0 */ // 0x806AFDB0
    /* li r30, 0x57 */ // 0x806AFDB4
    /* b 0x806afde0 */ // 0x806AFDB8
    r0 = *(0x6c + r29); // lwz @ 0x806AFDBC
    if (==) goto 0x0x806afdd4;
    if (==) goto 0x0x806afddc;
    /* b 0x806afde0 */ // 0x806AFDD0
    /* li r30, 0x5b */ // 0x806AFDD4
    /* b 0x806afde0 */ // 0x806AFDD8
    /* li r30, 0x5d */ // 0x806AFDDC
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r29); // lwz @ 0x806AFDE8
    r3 = r29;
    r4 = r30;
    /* li r5, 0 */ // 0x806AFDF4
    r12 = *(0x1c + r12); // lwz @ 0x806AFDF8
    /* mtctr r12 */ // 0x806AFDFC
    /* bctrl  */ // 0x806AFE00
    /* li r0, 1 */ // 0x806AFE04
    *(0x8b4 + r29) = r0; // stb @ 0x806AFE08
    /* lis r3, 0 */ // 0x806AFE0C
    *(0x8b5 + r29) = r0; // stb @ 0x806AFE10
    r3 = *(0 + r3); // lwz @ 0x806AFE14
    r3 = *(0 + r3); // lwz @ 0x806AFE18
    r30 = *(0x11c + r3); // lwz @ 0x806AFE1C
    if (!=) goto 0x0x806afe30;
    /* li r30, 0 */ // 0x806AFE28
    /* b 0x806afe84 */ // 0x806AFE2C
    /* lis r31, 0 */ // 0x806AFE30
    r31 = r31 + 0; // 0x806AFE34
    if (==) goto 0x0x806afe80;
    r12 = *(0 + r30); // lwz @ 0x806AFE3C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AFE44
    /* mtctr r12 */ // 0x806AFE48
    /* bctrl  */ // 0x806AFE4C
    /* b 0x806afe68 */ // 0x806AFE50
    if (!=) goto 0x0x806afe64;
    /* li r0, 1 */ // 0x806AFE5C
    /* b 0x806afe74 */ // 0x806AFE60
    r3 = *(0 + r3); // lwz @ 0x806AFE64
    if (!=) goto 0x0x806afe54;
    /* li r0, 0 */ // 0x806AFE70
    if (==) goto 0x0x806afe80;
    /* b 0x806afe84 */ // 0x806AFE7C
    /* li r30, 0 */ // 0x806AFE80
    /* li r0, 0 */ // 0x806AFE84
    *(0x1d4 + r30) = r0; // stb @ 0x806AFE88
    r3 = r30 + 0x54; // 0x806AFE8C
    FUN_8064F568(r3); // bl 0x8064F568
    r0 = *(0x24 + r1); // lwz @ 0x806AFE94
    r31 = *(0x1c + r1); // lwz @ 0x806AFE98
    r30 = *(0x18 + r1); // lwz @ 0x806AFE9C
    r29 = *(0x14 + r1); // lwz @ 0x806AFEA0
    return;
}