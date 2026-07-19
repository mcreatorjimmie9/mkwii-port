/* Function at 0x806BDB3C, size=236 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806BDB3C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* clrlwi r7, r6, 0x18 */ // 0x806BDB44
    r0 = r5 rlwinm 1; // rlwinm
    r0 = r7 + r0; // 0x806BDB50
    *(0x9c + r1) = r31; // stw @ 0x806BDB54
    *(0x98 + r1) = r30; // stw @ 0x806BDB58
    r30 = r3;
    *(0x188 + r3) = r4; // stw @ 0x806BDB60
    r4 = r30;
    *(0x18c + r3) = r5; // stb @ 0x806BDB68
    *(0x18d + r3) = r6; // stb @ 0x806BDB6C
    *(0x190 + r3) = r0; // stw @ 0x806BDB70
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r3, 0 */ // 0x806BDB7C
    /* li r0, 0xc */ // 0x806BDB80
    r3 = r3 + 0; // 0x806BDB84
    r4 = r3 + -4; // 0x806BDB8C
    /* mtctr r0 */ // 0x806BDB90
    r3 = *(4 + r4); // lwz @ 0x806BDB94
    r0 = *(8 + r4); // lwzu @ 0x806BDB98
    *(4 + r5) = r3; // stw @ 0x806BDB9C
    *(8 + r5) = r0; // stwu @ 0x806BDBA0
    if (counter-- != 0) goto 0x0x806bdb94;
    /* lis r31, 0 */ // 0x806BDBA8
    r31 = r31 + 0; // 0x806BDBB0
    r4 = r31 + 0x79; // 0x806BDBB8
    r5 = r31 + 0x7f; // 0x806BDBBC
    r6 = r31 + 0x94; // 0x806BDBC0
    FUN_8064E36C(r7, r4, r5, r6); // bl 0x8064E36C
    r4 = r31 + 0xa9; // 0x806BDBC8
    r3 = r30 + 0xa8; // 0x806BDBCC
    FUN_80665D1C(r5, r6, r4, r3); // bl 0x80665D1C
    *(0x194 + r30) = r3; // stw @ 0x806BDBD4
    /* lis r4, 0 */ // 0x806BDBD8
    r4 = *(0 + r4); // lwz @ 0x806BDBDC
    r0 = *(0x58 + r4); // lwz @ 0x806BDBE0
    if (!=) goto 0x0x806bdc04;
    /* lis r4, 0 */ // 0x806BDBEC
    /* lfs f0, 0(r4) */ // 0x806BDBF0
    /* stfs f0, 0x44(r3) */ // 0x806BDBF4
    /* stfs f0, 8(r1) */ // 0x806BDBF8
    /* stfs f0, 0xc(r1) */ // 0x806BDBFC
    /* stfs f0, 0x48(r3) */ // 0x806BDC00
    /* li r4, -1 */ // 0x806BDC08
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0xa4 + r1); // lwz @ 0x806BDC10
    r31 = *(0x9c + r1); // lwz @ 0x806BDC14
    r30 = *(0x98 + r1); // lwz @ 0x806BDC18
    return;
}