/* Function at 0x806C1B68, size=376 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806C1B68(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806C1B70
    /* li r0, -1 */ // 0x806C1B78
    *(0x1c + r1) = r31; // stw @ 0x806C1B7C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806C1B84
    *(0x14 + r1) = r29; // stw @ 0x806C1B88
    *(0x360 + r3) = r0; // stw @ 0x806C1B8C
    r3 = *(0 + r4); // lwz @ 0x806C1B90
    r3 = *(0 + r3); // lwz @ 0x806C1B94
    r29 = *(0x27c + r3); // lwz @ 0x806C1B98
    if (!=) goto 0x0x806c1bac;
    /* li r29, 0 */ // 0x806C1BA4
    /* b 0x806c1c00 */ // 0x806C1BA8
    /* lis r30, 0 */ // 0x806C1BAC
    r30 = r30 + 0; // 0x806C1BB0
    if (==) goto 0x0x806c1bfc;
    r12 = *(0 + r29); // lwz @ 0x806C1BB8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806C1BC0
    /* mtctr r12 */ // 0x806C1BC4
    /* bctrl  */ // 0x806C1BC8
    /* b 0x806c1be4 */ // 0x806C1BCC
    if (!=) goto 0x0x806c1be0;
    /* li r0, 1 */ // 0x806C1BD8
    /* b 0x806c1bf0 */ // 0x806C1BDC
    r3 = *(0 + r3); // lwz @ 0x806C1BE0
    if (!=) goto 0x0x806c1bd0;
    /* li r0, 0 */ // 0x806C1BEC
    if (==) goto 0x0x806c1bfc;
    /* b 0x806c1c00 */ // 0x806C1BF8
    /* li r29, 0 */ // 0x806C1BFC
    r0 = *(0x350 + r31); // lwz @ 0x806C1C00
    if (==) goto 0x0x806c1c28;
    if (==) goto 0x0x806c1c28;
    if (==) goto 0x0x806c1c34;
    if (==) goto 0x0x806c1c34;
    /* b 0x806c1c3c */ // 0x806C1C24
    /* li r0, 1 */ // 0x806C1C28
    *(0xdb4 + r29) = r0; // stw @ 0x806C1C2C
    /* b 0x806c1c3c */ // 0x806C1C30
    /* li r0, 0 */ // 0x806C1C34
    *(0xdb4 + r29) = r0; // stw @ 0x806C1C38
    r0 = *(0x350 + r31); // lwz @ 0x806C1C3C
    if (==) goto 0x0x806c1c64;
    if (==) goto 0x0x806c1c84;
    if (==) goto 0x0x806c1ca0;
    if (==) goto 0x0x806c1cac;
    /* b 0x806c1cb4 */ // 0x806C1C60
    /* lis r3, 0 */ // 0x806C1C64
    r4 = *(0x354 + r31); // lwz @ 0x806C1C68
    r3 = *(0 + r3); // lwz @ 0x806C1C6C
    r5 = *(0x358 + r31); // lbz @ 0x806C1C70
    FUN_806E631C(r3); // bl 0x806E631C
    /* li r0, 1 */ // 0x806C1C78
    *(0x35c + r31) = r0; // stw @ 0x806C1C7C
    /* b 0x806c1cb4 */ // 0x806C1C80
    /* lis r3, 0 */ // 0x806C1C84
    r4 = *(0x358 + r31); // lbz @ 0x806C1C88
    r3 = *(0 + r3); // lwz @ 0x806C1C8C
    FUN_806E63F0(r3); // bl 0x806E63F0
    /* li r0, 0 */ // 0x806C1C94
    *(0x35c + r31) = r0; // stw @ 0x806C1C98
    /* b 0x806c1cb4 */ // 0x806C1C9C
    /* li r0, 2 */ // 0x806C1CA0
    *(0x35c + r31) = r0; // stw @ 0x806C1CA4
    /* b 0x806c1cb4 */ // 0x806C1CA8
    /* li r0, 2 */ // 0x806C1CAC
    *(0x35c + r31) = r0; // stw @ 0x806C1CB0
    /* lis r4, 0 */ // 0x806C1CB4
    r3 = r31 + 0x344; // 0x806C1CB8
    /* lfs f1, 0(r4) */ // 0x806C1CBC
    FUN_8064ED64(r4, r3); // bl 0x8064ED64
    r0 = *(0x24 + r1); // lwz @ 0x806C1CC4
    r31 = *(0x1c + r1); // lwz @ 0x806C1CC8
    r30 = *(0x18 + r1); // lwz @ 0x806C1CCC
    r29 = *(0x14 + r1); // lwz @ 0x806C1CD0
    return;
}