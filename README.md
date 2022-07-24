# udemy-cc-lubmn
c/c++ learning course on Udemy

# Usage

- move into working dir
- build image and create container

```{shell}
$ docker-compose up -d
```

- get into the container

```{shell}
$ docker-compose exec [container name] bash
```

# Memo

## compile with a headerfile

```
.
├── main.c
├── calc.c
└── calc.h
```

```{shell}
$ gcc -o main.out main.c calc.c
```

## compile with math.h

When you're going to use <math.h>, you should add `-lm` option to compile.

```{shell}
$ gcc -o smaple.c sample.out -lm
```

## printf: pointer address and unsigned long

|type|param|
|:-|:-|
|int|"%d"|
|float|"%f"|
|double|"%f"|
|unsigned int|"%x"|
|pointer address|"%p"|
|unsigned long|"%lu"|
