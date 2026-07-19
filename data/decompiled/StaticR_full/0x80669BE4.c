/* Function at 0x80669BE4, size=396 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80669BE4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0x5555 */ // 0x80669BEC
    r0 = r4 + 0x5556; // 0x80669BF4
    *(0x5c + r1) = r31; // stw @ 0x80669BF8
    r31 = r3;
    *(0x58 + r1) = r30; // stw @ 0x80669C00
    /* lis r30, 0 */ // 0x80669C04
    r30 = r30 + 0; // 0x80669C08
    *(0x54 + r1) = r29; // stw @ 0x80669C0C
    r6 = *(0 + r3); // lwz @ 0x80669C10
    r5 = *(0xba + r6); // lbz @ 0x80669C14
    /* mulhw r4, r0, r5 */ // 0x80669C18
    /* srwi r0, r4, 0x1f */ // 0x80669C1C
    r0 = r4 + r0; // 0x80669C20
    /* mulli r0, r0, 3 */ // 0x80669C24
    /* subf r0, r0, r5 */ // 0x80669C28
    /* clrlwi. r0, r0, 0x18 */ // 0x80669C2C
    if (==) goto 0x0x80669c48;
    if (==) goto 0x0x80669c6c;
    if (==) goto 0x0x80669c90;
    /* b 0x80669cb4 */ // 0x80669C44
    /* lfs f2, 0xb0(r30) */ // 0x80669C48
    /* lfs f1, 0x4c(r6) */ // 0x80669C4C
    /* lfs f0, 0(r30) */ // 0x80669C50
    /* fmuls f1, f2, f1 */ // 0x80669C54
    /* stfs f0, 0x38(r1) */ // 0x80669C58
    /* stfs f1, 0x44(r1) */ // 0x80669C5C
    /* lfs f0, 0x4c(r6) */ // 0x80669C60
    /* stfs f0, 0x2c(r1) */ // 0x80669C64
    /* b 0x80669cb4 */ // 0x80669C68
    /* lfs f0, 0(r30) */ // 0x80669C6C
    /* stfs f0, 0x44(r1) */ // 0x80669C70
    /* lfs f1, 0xb4(r30) */ // 0x80669C74
    /* lfs f0, 0x4c(r6) */ // 0x80669C78
    /* fmuls f0, f1, f0 */ // 0x80669C7C
    /* stfs f0, 0x38(r1) */ // 0x80669C80
    /* fneg f0, f0 */ // 0x80669C84
    /* stfs f0, 0x2c(r1) */ // 0x80669C88
    /* b 0x80669cb4 */ // 0x80669C8C
    /* lfs f2, 0xb4(r30) */ // 0x80669C90
    /* lfs f1, 0x4c(r6) */ // 0x80669C94
    /* lfs f0, 0(r30) */ // 0x80669C98
    /* fmuls f1, f2, f1 */ // 0x80669C9C
    /* stfs f1, 0x44(r1) */ // 0x80669CA0
    /* lfs f1, 0x4c(r6) */ // 0x80669CA4
    /* fneg f1, f1 */ // 0x80669CA8
    /* stfs f0, 0x2c(r1) */ // 0x80669CAC
    /* stfs f1, 0x38(r1) */ // 0x80669CB0
    r5 = *(0 + r3); // lwz @ 0x80669CB4
    /* lis r4, 0x5555 */ // 0x80669CB8
    r4 = r4 + 0x5556; // 0x80669CBC
    r0 = *(0xba + r5); // lbz @ 0x80669CC0
    /* mulhw r4, r4, r0 */ // 0x80669CC4
    /* srwi r0, r4, 0x1f */ // 0x80669CC8
    r0 = r4 + r0; // 0x80669CCC
    /* clrlwi. r0, r0, 0x18 */ // 0x80669CD0
    if (==) goto 0x0x80669cec;
    if (==) goto 0x0x80669d0c;
    if (==) goto 0x0x80669d2c;
    /* b 0x80669d48 */ // 0x80669CE8
    /* lfs f2, 0xb4(r30) */ // 0x80669CEC
    /* lfs f1, 0x50(r5) */ // 0x80669CF0
    /* lfs f0, 0(r30) */ // 0x80669CF4
    /* fmuls f1, f2, f1 */ // 0x80669CF8
    /* stfs f0, 0x3c(r1) */ // 0x80669CFC
    /* stfs f1, 0x48(r1) */ // 0x80669D00
    /* stfs f0, 0x30(r1) */ // 0x80669D04
    /* b 0x80669d48 */ // 0x80669D08
    /* lfs f0, 0(r30) */ // 0x80669D0C
    /* stfs f0, 0x48(r1) */ // 0x80669D10
    /* lfs f1, 0xb0(r30) */ // 0x80669D14
    /* lfs f0, 0x50(r5) */ // 0x80669D18
    /* fmuls f0, f1, f0 */ // 0x80669D1C
    /* stfs f0, 0x3c(r1) */ // 0x80669D20
    /* stfs f0, 0x30(r1) */ // 0x80669D24
    /* b 0x80669d48 */ // 0x80669D28
    /* lfs f1, 0xb0(r30) */ // 0x80669D2C
    /* lfs f0, 0x50(r5) */ // 0x80669D30
    /* fmuls f0, f1, f0 */ // 0x80669D34
    /* stfs f0, 0x48(r1) */ // 0x80669D38
    /* lfs f0, 0x50(r5) */ // 0x80669D3C
    /* stfs f0, 0x3c(r1) */ // 0x80669D40
    /* stfs f0, 0x30(r1) */ // 0x80669D44
    /* lfs f0, 0(r30) */ // 0x80669D48
    /* stfs f0, 0x4c(r1) */ // 0x80669D50
    /* stfs f0, 0x40(r1) */ // 0x80669D54
    /* stfs f0, 0x34(r1) */ // 0x80669D58
    r4 = *(0 + r3); // lwz @ 0x80669D5C
    r29 = r4 + 0x84; // 0x80669D64
    r4 = r29;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}