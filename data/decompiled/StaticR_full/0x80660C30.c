/* Function at 0x80660C30, size=616 bytes */
/* Stack frame: 448 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 25 function(s) */

int FUN_80660C30(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -448(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r5;
    r30 = r4;
    *(0x1b4 + r1) = r29; // stw @ 0x80660C4C
    r29 = r3;
    *(0x1b0 + r1) = r28; // stw @ 0x80660C54
    r0 = *(0 + r4); // lbz @ 0x80660C58
    if (!=) goto 0x0x80660cf8;
    /* lis r28, 0 */ // 0x80660C64
    r28 = r28 + 0; // 0x80660C68
    r4 = r28 + 0x27; // 0x80660C6C
    FUN_806A0B6C(r4); // bl 0x806A0B6C
    r3 = r29;
    r4 = r28 + 0x33; // 0x80660C78
    FUN_806A0B6C(r4, r3, r4); // bl 0x806A0B6C
    r3 = r29 + 0x174; // 0x80660C80
    /* li r4, 0 */ // 0x80660C84
    FUN_8066E240(r3, r4, r3, r4); // bl 0x8066E240
    r3 = r29;
    r4 = r28 + 0x38; // 0x80660C90
    FUN_806A0B6C(r3, r4, r3, r4); // bl 0x806A0B6C
    r3 = r29;
    r4 = r28 + 0x3f; // 0x80660C9C
    /* li r5, 0 */ // 0x80660CA0
    FUN_806A11CC(r4, r3, r4, r5); // bl 0x806A11CC
    r4 = r28 + 0x4b; // 0x80660CA8
    r3 = r29 + 0xa8; // 0x80660CAC
    FUN_80665D1C(r4, r5, r4, r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x80660CB4
    r4 = r28 + 0x51; // 0x80660CB8
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80660CC0
    r3 = r29 + 0xa8; // 0x80660CC4
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x80660CCC
    /* li r4, 2 */ // 0x80660CD0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80660CD8
    r3 = r29 + 0x98; // 0x80660CDC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80660CE4
    /* li r4, 1 */ // 0x80660CE8
    /* lfs f1, 0(r5) */ // 0x80660CEC
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    /* b 0x80660f24 */ // 0x80660CF4
    r5 = *(0xb8 + r30); // lwz @ 0x80660CF8
    /* lis r4, 0 */ // 0x80660CFC
    r4 = r4 + 0; // 0x80660D00
    /* li r6, 0 */ // 0x80660D04
    r4 = r4 + 0x59; // 0x80660D08
    r5 = r5 + 0x2454; // 0x80660D0C
    FUN_806A093C(r4, r4, r6, r4, r5); // bl 0x806A093C
    FUN_80654ECC(r6, r4, r5, r3); // bl 0x80654ECC
    r3 = *(0xa8 + r30); // lhz @ 0x80660D1C
    /* li r0, 0x63 */ // 0x80660D20
    if (>) goto 0x0x80660d30;
    r0 = r3;
    /* clrlwi r0, r0, 0x18 */ // 0x80660D30
    *(0xe4 + r1) = r0; // stw @ 0x80660D34
    r0 = *(0xa8 + r30); // lhz @ 0x80660D38
    if (<=) goto 0x0x80660d4c;
    /* li r0, 0x3b */ // 0x80660D44
    /* b 0x80660d50 */ // 0x80660D48
    r0 = *(0xaa + r30); // lbz @ 0x80660D4C
    *(0xe8 + r1) = r0; // stw @ 0x80660D50
    r0 = *(0xa8 + r30); // lhz @ 0x80660D54
    if (<=) goto 0x0x80660d68;
    /* li r0, 0x3e7 */ // 0x80660D60
    /* b 0x80660d6c */ // 0x80660D64
    r0 = *(0xac + r30); // lhz @ 0x80660D68
    /* lis r28, 0 */ // 0x80660D6C
    *(0xec + r1) = r0; // stw @ 0x80660D70
    r28 = r28 + 0; // 0x80660D74
    r3 = r29;
    r4 = r28 + 0x65; // 0x80660D7C
    /* li r5, 0x17a4 */ // 0x80660D84
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r29 + 0x174; // 0x80660D8C
    r5 = r30 + 0x18; // 0x80660D90
    /* li r4, 0 */ // 0x80660D94
    FUN_8066DDCC(r5, r3, r5, r4); // bl 0x8066DDCC
    FUN_80654ECC(r3, r5, r4, r3); // bl 0x80654ECC
    r3 = r29 + 0x174; // 0x80660DA4
    /* li r4, 0 */ // 0x80660DA8
    FUN_8066E0EC(r3, r3, r4); // bl 0x8066E0EC
    *(0x68 + r1) = r3; // stw @ 0x80660DB0
    r3 = r29;
    r4 = r28 + 0x6a; // 0x80660DB8
    /* li r5, 0x251d */ // 0x80660DC0
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r0 = *(0xc4 + r30); // lwz @ 0x80660DC8
    if (==) goto 0x0x80660ddc;
    if (!=) goto 0x0x80660e08;
    /* lis r28, 0 */ // 0x80660DDC
    r3 = r29;
    r28 = r28 + 0; // 0x80660DE4
    /* li r5, 0 */ // 0x80660DE8
    r4 = r28 + 0x71; // 0x80660DEC
    FUN_806A11CC(r3, r5, r4); // bl 0x806A11CC
    r3 = r29;
    r4 = r28 + 0x7d; // 0x80660DF8
    /* li r5, 1 */ // 0x80660DFC
    FUN_806A11CC(r4, r3, r4, r5); // bl 0x806A11CC
    /* b 0x80660e84 */ // 0x80660E04
    r0 = *(0xcc + r30); // lwz @ 0x80660E08
    r5 = r28 + 0x86; // 0x80660E10
    /* li r4, 7 */ // 0x80660E14
    /* srwi r6, r0, 0x18 */ // 0x80660E18
    /* crclr cr1eq */ // 0x80660E1C
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    r3 = r29;
    FUN_806A0FA8(r3, r4); // bl 0x806A0FA8
    if (==) goto 0x0x80660e5c;
    r3 = r29;
    r4 = r28 + 0x8b; // 0x80660E3C
    /* li r5, 1 */ // 0x80660E40
    FUN_806A11CC(r3, r4, r5); // bl 0x806A11CC
    r3 = r29;
    r4 = r28 + 0x97; // 0x80660E4C
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    /* b 0x80660e6c */ // 0x80660E58
    r3 = r29;
    r4 = r28 + 0xa3; // 0x80660E60
    /* li r5, 0 */ // 0x80660E64
    FUN_806A11CC(r3, r4, r5); // bl 0x806A11CC
    /* lis r4, 0 */ // 0x80660E6C
    r3 = r29;
    r4 = r4 + 0; // 0x80660E74
    /* li r5, 0 */ // 0x80660E78
    r4 = r4 + 0xaf; // 0x80660E7C
    FUN_806A11CC(r4, r3, r4, r5, r4); // bl 0x806A11CC
    r3 = *(0xb0 + r30); // lwz @ 0x80660E84
    FUN_808CFF20(r4, r5, r4); // bl 0x808CFF20
    /* lis r28, 0 */ // 0x80660E8C
    r5 = r3;
    r28 = r28 + 0; // 0x80660E94
}