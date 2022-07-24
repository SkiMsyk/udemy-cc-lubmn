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

