/* Function at 0x80808814, size=160 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80808814(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x8080882C
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x80808834
    r29 = r3;
    if (==) goto 0x0x80808850;
    r3 = *(0xb4 + r3); // lwz @ 0x80808840
    r0 = r3 + -2; // 0x80808844
    if (>) goto 0x0x80808858;
    r3 = r31;
    /* b 0x8080891c */ // 0x80808854
    if (==) goto 0x0x80808868;
    if (!=) goto 0x0x80808918;
    r4 = r7;
    FUN_805A4400(r4, r3); // bl 0x805A4400
    /* lfs f0, 8(r1) */ // 0x80808874
    r3 = r29 + 0xc4; // 0x80808878
    /* stfs f0, 0xc4(r29) */ // 0x8080887C
    /* lfs f0, 0xc(r1) */ // 0x80808880
    /* stfs f0, 0xc8(r29) */ // 0x80808884
    /* lfs f0, 0x10(r1) */ // 0x80808888
    /* stfs f0, 0xcc(r29) */ // 0x8080888C
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x80808894
    /* lfs f2, 0xc4(r29) */ // 0x80808898
    /* lfs f3, 0(r3) */ // 0x8080889C
    r3 = r29;
    /* lfs f1, 0xc8(r29) */ // 0x808088A4
    r4 = r29 + 0xc4; // 0x808088A8
    /* lfs f0, 0xcc(r29) */ // 0x808088AC
    /* fmuls f2, f2, f3 */ // 0x808088B0
}