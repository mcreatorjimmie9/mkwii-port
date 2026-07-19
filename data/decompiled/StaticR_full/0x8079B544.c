/* Function at 0x8079B544, size=828 bytes */
/* Stack frame: 0 bytes */

void FUN_8079B544(int r3, int r4, int r5)
{
    r0 = *(0x9c + r3); // lhz @ 0x8079B544
    if (==) goto 0x0x8079b6f4;
    if (>=) goto 0x0x8079b5d4;
    if (==) goto 0x0x8079b6bc;
    if (>=) goto 0x0x8079b598;
    if (>=) goto 0x0x8079b580;
    if (==) goto 0x0x8079b6a0;
    /* bgelr  */ // 0x8079B570
    if (>=) goto 0x0x8079b684;
    return;
    if (==) goto 0x0x8079b64c;
    /* bgelr  */ // 0x8079B588
    if (>=) goto 0x0x8079b668;
    /* b 0x8079b64c */ // 0x8079B594
    if (==) goto 0x0x8079b6d8;
    if (>=) goto 0x0x8079b5c8;
    /* beqlr  */ // 0x8079B5A8
    if (>=) goto 0x0x8079b5bc;
    if (>=) goto 0x0x8079b64c;
    return;
    /* bgelr  */ // 0x8079B5C0
    /* b 0x8079b64c */ // 0x8079B5C4
    if (==) goto 0x0x8079b6bc;
    return;
    if (==) goto 0x0x8079b810;
    if (>=) goto 0x0x8079b614;
    if (==) goto 0x0x8079b7d8;
    if (>=) goto 0x0x8079b604;
    if (==) goto 0x0x8079b78c;
    /* bgelr  */ // 0x8079B5F4
    /* bgelr  */ // 0x8079B5FC
    /* b 0x8079b740 */ // 0x8079B600
    if (==) goto 0x0x8079b7f4;
    if (>=) goto 0x0x8079b6d8;
    return;
    if (==) goto 0x0x8079b864;
    if (>=) goto 0x0x8079b640;
    if (>=) goto 0x0x8079b634;
    if (>=) goto 0x0x8079b82c;
    return;
    if (>=) goto 0x0x8079b848;
    return;
    if (==) goto 0x0x8079b6bc;
    return;
    r12 = *(0 + r3); // lwz @ 0x8079B64C
    /* lis r5, 0 */ // 0x8079B650
    /* li r4, 0x1d4 */ // 0x8079B654
    /* lfs f1, 0(r5) */ // 0x8079B658
    r12 = *(0xe8 + r12); // lwz @ 0x8079B65C
    /* mtctr r12 */ // 0x8079B660
    /* bctr  */ // 0x8079B664
    r12 = *(0 + r3); // lwz @ 0x8079B668
    /* lis r4, 0 */ // 0x8079B66C
    /* lfs f1, 0(r4) */ // 0x8079B670
    /* li r4, 0x1d5 */ // 0x8079B674
    r12 = *(0xe8 + r12); // lwz @ 0x8079B678
    /* mtctr r12 */ // 0x8079B67C
    /* bctr  */ // 0x8079B680
    r12 = *(0 + r3); // lwz @ 0x8079B684
    /* lis r4, 0 */ // 0x8079B688
    /* lfs f1, 0(r4) */ // 0x8079B68C
    /* li r4, 0x353 */ // 0x8079B690
    r12 = *(0xe8 + r12); // lwz @ 0x8079B694
    /* mtctr r12 */ // 0x8079B698
    /* bctr  */ // 0x8079B69C
    r12 = *(0 + r3); // lwz @ 0x8079B6A0
    /* lis r4, 0 */ // 0x8079B6A4
    /* lfs f1, 0(r4) */ // 0x8079B6A8
    /* li r4, 0x223 */ // 0x8079B6AC
    r12 = *(0xe8 + r12); // lwz @ 0x8079B6B0
    /* mtctr r12 */ // 0x8079B6B4
    /* bctr  */ // 0x8079B6B8
    r12 = *(0 + r3); // lwz @ 0x8079B6BC
    /* lis r5, 0 */ // 0x8079B6C0
    /* li r4, 0x1e2 */ // 0x8079B6C4
    /* lfs f1, 0(r5) */ // 0x8079B6C8
    r12 = *(0xe8 + r12); // lwz @ 0x8079B6CC
    /* mtctr r12 */ // 0x8079B6D0
    /* bctr  */ // 0x8079B6D4
    r12 = *(0 + r3); // lwz @ 0x8079B6D8
    /* lis r5, 0 */ // 0x8079B6DC
    /* li r4, 0x1e4 */ // 0x8079B6E0
    /* lfs f1, 0(r5) */ // 0x8079B6E4
    r12 = *(0xe8 + r12); // lwz @ 0x8079B6E8
    /* mtctr r12 */ // 0x8079B6EC
    /* bctr  */ // 0x8079B6F0
    /* lis r4, 0 */ // 0x8079B6F4
    r4 = *(0 + r4); // lwz @ 0x8079B6F8
    r0 = *(0xb70 + r4); // lwz @ 0x8079B6FC
    if (!=) goto 0x0x8079b724;
    r12 = *(0 + r3); // lwz @ 0x8079B708
    /* lis r4, 0 */ // 0x8079B70C
    /* lfs f1, 0(r4) */ // 0x8079B710
    /* li r4, 0x1ed */ // 0x8079B714
    r12 = *(0xe8 + r12); // lwz @ 0x8079B718
    /* mtctr r12 */ // 0x8079B71C
    /* bctr  */ // 0x8079B720
    r12 = *(0 + r3); // lwz @ 0x8079B724
    /* lis r4, 0 */ // 0x8079B728
    /* lfs f1, 0(r4) */ // 0x8079B72C
    /* li r4, 0x1e8 */ // 0x8079B730
    r12 = *(0xe8 + r12); // lwz @ 0x8079B734
    /* mtctr r12 */ // 0x8079B738
    /* bctr  */ // 0x8079B73C
    /* lis r4, 0 */ // 0x8079B740
    r4 = *(0 + r4); // lwz @ 0x8079B744
    r0 = *(0xb70 + r4); // lwz @ 0x8079B748
    if (!=) goto 0x0x8079b770;
    r12 = *(0 + r3); // lwz @ 0x8079B754
    /* lis r4, 0 */ // 0x8079B758
    /* lfs f1, 0(r4) */ // 0x8079B75C
    /* li r4, 0x1ed */ // 0x8079B760
    r12 = *(0xe8 + r12); // lwz @ 0x8079B764
    /* mtctr r12 */ // 0x8079B768
    /* bctr  */ // 0x8079B76C
    r12 = *(0 + r3); // lwz @ 0x8079B770
    /* lis r4, 0 */ // 0x8079B774
    /* lfs f1, 0(r4) */ // 0x8079B778
    /* li r4, 0x1e9 */ // 0x8079B77C
    r12 = *(0xe8 + r12); // lwz @ 0x8079B780
    /* mtctr r12 */ // 0x8079B784
    /* bctr  */ // 0x8079B788
    /* lis r4, 0 */ // 0x8079B78C
    r4 = *(0 + r4); // lwz @ 0x8079B790
    r0 = *(0xb70 + r4); // lwz @ 0x8079B794
    if (!=) goto 0x0x8079b7bc;
    r12 = *(0 + r3); // lwz @ 0x8079B7A0
    /* lis r4, 0 */ // 0x8079B7A4
    /* lfs f1, 0(r4) */ // 0x8079B7A8
    /* li r4, 0x1ed */ // 0x8079B7AC
    r12 = *(0xe8 + r12); // lwz @ 0x8079B7B0
    /* mtctr r12 */ // 0x8079B7B4
    /* bctr  */ // 0x8079B7B8
    r12 = *(0 + r3); // lwz @ 0x8079B7BC
    /* lis r4, 0 */ // 0x8079B7C0
    /* lfs f1, 0(r4) */ // 0x8079B7C4
    /* li r4, 0x1e7 */ // 0x8079B7C8
    r12 = *(0xe8 + r12); // lwz @ 0x8079B7CC
    /* mtctr r12 */ // 0x8079B7D0
    /* bctr  */ // 0x8079B7D4
    r12 = *(0 + r3); // lwz @ 0x8079B7D8
    /* lis r4, 0 */ // 0x8079B7DC
    /* lfs f1, 0(r4) */ // 0x8079B7E0
    /* li r4, 0x1ea */ // 0x8079B7E4
    r12 = *(0xe8 + r12); // lwz @ 0x8079B7E8
    /* mtctr r12 */ // 0x8079B7EC
    /* bctr  */ // 0x8079B7F0
    r12 = *(0 + r3); // lwz @ 0x8079B7F4
    /* lis r4, 0 */ // 0x8079B7F8
    /* lfs f1, 0(r4) */ // 0x8079B7FC
    /* li r4, 0x1eb */ // 0x8079B800
    r12 = *(0xe8 + r12); // lwz @ 0x8079B804
    /* mtctr r12 */ // 0x8079B808
    /* bctr  */ // 0x8079B80C
    r12 = *(0 + r3); // lwz @ 0x8079B810
    /* lis r4, 0 */ // 0x8079B814
    /* lfs f1, 0(r4) */ // 0x8079B818
    /* li r4, 0x1ec */ // 0x8079B81C
    r12 = *(0xe8 + r12); // lwz @ 0x8079B820
    /* mtctr r12 */ // 0x8079B824
    /* bctr  */ // 0x8079B828
    r12 = *(0 + r3); // lwz @ 0x8079B82C
    /* lis r4, 0 */ // 0x8079B830
    /* lfs f1, 0(r4) */ // 0x8079B834
    /* li r4, 0x1ed */ // 0x8079B838
    r12 = *(0xe8 + r12); // lwz @ 0x8079B83C
    /* mtctr r12 */ // 0x8079B840
    /* bctr  */ // 0x8079B844
    r12 = *(0 + r3); // lwz @ 0x8079B848
    /* lis r4, 0 */ // 0x8079B84C
    /* lfs f1, 0(r4) */ // 0x8079B850
    /* li r4, 0x1e6 */ // 0x8079B854
    r12 = *(0xe8 + r12); // lwz @ 0x8079B858
    /* mtctr r12 */ // 0x8079B85C
    /* bctr  */ // 0x8079B860
    r12 = *(0 + r3); // lwz @ 0x8079B864
    /* lis r4, 0 */ // 0x8079B868
    /* lfs f1, 0(r4) */ // 0x8079B86C
    /* li r4, 0x1e6 */ // 0x8079B870
    r12 = *(0xe8 + r12); // lwz @ 0x8079B874
    /* mtctr r12 */ // 0x8079B878
    /* bctr  */ // 0x8079B87C
}