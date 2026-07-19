/* Function at 0x80628918, size=200 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80628918(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80628928
    r31 = r31 + 0; // 0x8062892C
    *(0x58 + r1) = r30; // stw @ 0x80628930
    *(0x54 + r1) = r29; // stw @ 0x80628934
    r29 = r3;
    r4 = *(0x7c + r3); // lwz @ 0x8062893C
    r0 = *(4 + r4); // lwz @ 0x80628940
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80628944
    if (==) goto 0x0x80628a5c;
    FUN_8061DF18(); // bl 0x8061DF18
    r4 = *(0x98 + r29); // lwz @ 0x80628950
    /* lfs f2, 0(r31) */ // 0x80628954
    /* lfs f1, 0x6c(r4) */ // 0x80628958
    /* lfs f0, 0x22c(r3) */ // 0x8062895C
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x80628960
    if (<=) goto 0x0x8062896c;
    /* fdivs f2, f0, f1 */ // 0x80628968
    /* lfs f0, 0x9c(r29) */ // 0x8062896C
    /* lfs f1, 4(r31) */ // 0x80628970
    /* fadds f2, f0, f2 */ // 0x80628974
    /* stfs f2, 0x9c(r29) */ // 0x80628978
    /* .byte 0xfc, 0x02, 0x08, 0x40 */ // 0x8062897C
    if (<=) goto 0x0x80628990;
    /* fsubs f0, f2, f1 */ // 0x80628984
    /* stfs f0, 0x9c(r29) */ // 0x80628988
    /* b 0x806289a4 */ // 0x8062898C
    /* lfs f0, 8(r31) */ // 0x80628990
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80628994
    if (>=) goto 0x0x806289a4;
    /* fadds f0, f2, f1 */ // 0x8062899C
    /* stfs f0, 0x9c(r29) */ // 0x806289A0
    /* lfs f1, 0x9c(r29) */ // 0x806289A4
    /* lfs f0, 0(r31) */ // 0x806289AC
    /* stfs f1, 8(r1) */ // 0x806289B4
    /* stfs f0, 0xc(r1) */ // 0x806289B8
    /* stfs f0, 0x10(r1) */ // 0x806289BC
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = r29 + 0x1c; // 0x806289C4
    r5 = r3;
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r6 = *(0x98 + r29); // lwz @ 0x806289D4
    r3 = r29;
    r5 = *(0x20 + r6); // lwz @ 0x806289DC
}