/* Function at 0x8077AFC4, size=256 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8077AFC4(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x48 + r1) = r30; // stw @ 0x8077AFD4
    r30 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r3 = *(0x58 + r30); // lwz @ 0x8077AFE0
    /* li r31, 0 */ // 0x8077AFE4
    r0 = *(0x5c + r30); // lwz @ 0x8077AFE8
    *(0x1c + r1) = r0; // stw @ 0x8077AFEC
    *(0x18 + r1) = r3; // stw @ 0x8077AFF0
    r3 = *(0x60 + r30); // lwz @ 0x8077AFF4
    r0 = *(0x64 + r30); // lwz @ 0x8077AFF8
    *(0x24 + r1) = r0; // stw @ 0x8077AFFC
    *(0x20 + r1) = r3; // stw @ 0x8077B000
    r3 = *(0x68 + r30); // lwz @ 0x8077B004
    r0 = *(0x6c + r30); // lwz @ 0x8077B008
    *(0x2c + r1) = r0; // stw @ 0x8077B00C
    *(0x28 + r1) = r3; // stw @ 0x8077B010
    r3 = *(0x70 + r30); // lwz @ 0x8077B014
    r0 = *(0x74 + r30); // lwz @ 0x8077B018
    *(0x34 + r1) = r0; // stw @ 0x8077B01C
    *(0x30 + r1) = r3; // stw @ 0x8077B020
    r3 = *(0x78 + r30); // lwz @ 0x8077B024
    r0 = *(0x7c + r30); // lwz @ 0x8077B028
    *(0x3c + r1) = r0; // stw @ 0x8077B02C
    *(0x38 + r1) = r3; // stw @ 0x8077B030
    r3 = *(0x80 + r30); // lwz @ 0x8077B034
    r0 = *(0x84 + r30); // lwz @ 0x8077B038
    *(0x44 + r1) = r0; // stw @ 0x8077B03C
    *(0x40 + r1) = r3; // stw @ 0x8077B040
    r4 = *(0x30 + r30); // lwz @ 0x8077B044
    *(8 + r1) = r4; // stw @ 0x8077B048
    r0 = *(0x38 + r30); // lwz @ 0x8077B04C
    r3 = *(0x20 + r30); // lwz @ 0x8077B050
    *(0x10 + r1) = r0; // stw @ 0x8077B054
    r4 = *(0x34 + r30); // lwz @ 0x8077B058
    /* lfs f2, 0x1c(r3) */ // 0x8077B05C
    /* lfs f1, 8(r1) */ // 0x8077B060
    /* lfs f0, 0x10(r1) */ // 0x8077B064
    *(0xc + r1) = r4; // stw @ 0x8077B068
    /* stfs f1, 0x24(r1) */ // 0x8077B06C
    /* stfs f2, 0x34(r1) */ // 0x8077B070
    /* stfs f0, 0x44(r1) */ // 0x8077B074
    /* stfs f2, 0xc(r1) */ // 0x8077B078
    r30 = *(0x10 + r30); // lwz @ 0x8077B07C
    r3 = *(0x14 + r30); // lwz @ 0x8077B080
    r3 = *(0 + r3); // lwz @ 0x8077B084
    if (==) goto 0x0x8077b09c;
    /* li r4, 0 */ // 0x8077B094
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x8077B09C
    r30 = r30 + 4; // 0x8077B0A0
    if (<) goto 0x0x8077b080;
    r0 = *(0x54 + r1); // lwz @ 0x8077B0AC
    r31 = *(0x4c + r1); // lwz @ 0x8077B0B0
    r30 = *(0x48 + r1); // lwz @ 0x8077B0B4
    return;
}