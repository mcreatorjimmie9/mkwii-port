/* Function at 0x80828950, size=100 bytes */
/* Stack frame: 0 bytes */

void FUN_80828950(int r3, int r4, int r5, int r6)
{
    /* lis r4, 0 */ // 0x80828950
    /* li r5, 0 */ // 0x80828954
    /* lfs f0, 0(r4) */ // 0x80828958
    /* lis r6, 0 */ // 0x8082895C
    /* lis r4, 1 */ // 0x80828960
    *(0x74 + r3) = r5; // stw @ 0x80828964
    r6 = r6 + 0; // 0x80828968
    r0 = r4 + -1; // 0x8082896C
    *(0 + r3) = r6; // stw @ 0x80828970
    *(0x78 + r3) = r5; // stw @ 0x80828974
    *(0x7c + r3) = r5; // stw @ 0x80828978
    *(0xd4 + r3) = r5; // stw @ 0x8082897C
    /* stfs f0, 0xd8(r3) */ // 0x80828980
    /* stfs f0, 0xdc(r3) */ // 0x80828984
    /* stfs f0, 0xe0(r3) */ // 0x80828988
    /* stfs f0, 0xe4(r3) */ // 0x8082898C
    /* stfs f0, 0xe8(r3) */ // 0x80828990
    /* stfs f0, 0xec(r3) */ // 0x80828994
    *(0x130 + r3) = r5; // stw @ 0x80828998
    *(0x138 + r3) = r5; // stw @ 0x8082899C
    *(0xa0 + r3) = r5; // stw @ 0x808289A0
    *(0x9c + r3) = r5; // stw @ 0x808289A4
    *(0xa8 + r3) = r5; // stw @ 0x808289A8
    *(0xc + r3) = r0; // sth @ 0x808289AC
    return;
}