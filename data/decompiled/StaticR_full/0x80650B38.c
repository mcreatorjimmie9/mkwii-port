/* Function at 0x80650B38, size=336 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80650B38(int r3, int r4)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x80650B40
    *(0xd8 + r1) = r30; // stw @ 0x80650B4C
    *(0xd4 + r1) = r29; // stw @ 0x80650B50
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x80650B58
    r3 = *(0 + r3); // lwz @ 0x80650B5C
    r30 = *(0x14c + r3); // lwz @ 0x80650B60
    if (!=) goto 0x0x80650b74;
    /* li r30, 0 */ // 0x80650B6C
    /* b 0x80650bc8 */ // 0x80650B70
    /* lis r31, 0 */ // 0x80650B74
    r31 = r31 + 0; // 0x80650B78
    if (==) goto 0x0x80650bc4;
    r12 = *(0 + r30); // lwz @ 0x80650B80
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x80650B88
    /* mtctr r12 */ // 0x80650B8C
    /* bctrl  */ // 0x80650B90
    /* b 0x80650bac */ // 0x80650B94
    if (!=) goto 0x0x80650ba8;
    /* li r0, 1 */ // 0x80650BA0
    /* b 0x80650bb8 */ // 0x80650BA4
    r3 = *(0 + r3); // lwz @ 0x80650BA8
    if (!=) goto 0x0x80650b98;
    /* li r0, 0 */ // 0x80650BB4
    if (==) goto 0x0x80650bc4;
    /* b 0x80650bc8 */ // 0x80650BC0
    /* li r30, 0 */ // 0x80650BC4
    r12 = *(0 + r30); // lwz @ 0x80650BC8
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x80650BD0
    /* mtctr r12 */ // 0x80650BD4
    /* bctrl  */ // 0x80650BD8
    /* lis r3, 0 */ // 0x80650BDC
    /* li r31, 0 */ // 0x80650BE0
    r3 = *(0 + r3); // lwz @ 0x80650BE4
    FUN_806F5918(r3); // bl 0x806F5918
    if (>) goto 0x0x80650c7c;
    /* lis r4, 0 */ // 0x80650BF4
    /* slwi r0, r3, 2 */ // 0x80650BF8
    r4 = r4 + 0; // 0x80650BFC
    /* lwzx r4, r4, r0 */ // 0x80650C00
    /* mtctr r4 */ // 0x80650C04
    /* bctr  */ // 0x80650C08
    /* li r31, 0x1580 */ // 0x80650C0C
    /* b 0x80650c7c */ // 0x80650C10
    /* li r31, 0x18a6 */ // 0x80650C14
    /* b 0x80650c7c */ // 0x80650C18
    /* li r31, 0x18a7 */ // 0x80650C1C
    /* b 0x80650c7c */ // 0x80650C20
    /* li r31, 0x18a8 */ // 0x80650C24
    /* b 0x80650c7c */ // 0x80650C28
    /* li r31, 0x18a9 */ // 0x80650C2C
    /* b 0x80650c7c */ // 0x80650C30
    /* li r31, 0x18aa */ // 0x80650C34
    /* b 0x80650c7c */ // 0x80650C38
    /* li r31, 0x18ab */ // 0x80650C3C
    /* b 0x80650c7c */ // 0x80650C40
    /* li r31, 0x18ad */ // 0x80650C44
    /* b 0x80650c7c */ // 0x80650C48
    /* li r31, 0x815 */ // 0x80650C4C
    /* b 0x80650c7c */ // 0x80650C50
    /* lis r3, 0 */ // 0x80650C54
    r3 = *(0 + r3); // lwz @ 0x80650C58
    r3 = *(0x90 + r3); // lwz @ 0x80650C5C
    FUN_806845A4(r3); // bl 0x806845A4
    /* lis r4, 0 */ // 0x80650C64
    r3 = r29;
    /* lfs f1, 0(r4) */ // 0x80650C6C
    /* li r4, -1 */ // 0x80650C70
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* b 0x80650cdc */ // 0x80650C78
    FUN_80654ECC(r4, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x80650C84
}